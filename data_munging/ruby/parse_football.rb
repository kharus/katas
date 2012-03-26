File.open("../football.dat") do |file|
  data = Array.new
  file.each_line do |line|
    if line =~ /^\s*\d+/
      words = line.split
      data << [ words[1], (words[6].to_i - words[8].to_i).abs]
    end
  end
  min = data.min_by { | pair | pair[1] }
  puts min[0]
end
