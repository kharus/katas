require 'digest'

bloom_filter = 0

def make_hash(word)
  md5 = Digest::MD5.hexdigest(word)
  hashes = Array.new
  hashes[1] = md5[0..1].to_i(16)
  hashes[2] = md5[2..3].to_i(16)
  hashes[3] = md5[4..5].to_i(16)
  puts hashes
  (2**hashes[1])|(2**hashes[2])|(2**hashes[3])
end

File.open("words") do |file|
  file.each_line do |line|
    hash = make_hash(line)
    bloom_filter = bloom_filter| hash
    puts(hash.to_s(2))
    puts(bloom_filter.to_s(2))
  end
end

hasb = make_hash("Bulba")
puts (bloom_filter|hasb) == hasb

