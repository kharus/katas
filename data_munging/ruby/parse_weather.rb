class DayData
  def initialize(day_of_month, min, max)
    @day_of_month = day_of_month
    @min_temperature = min
    @max_temperature = max
  end

  def delta
    @max_temperature-@min_temperature
  end

  def to_s
    "#{@day_of_month}: #{@min_temperature}-#{@max_temperature}"
  end
end

File.open("../weather.dat") do |file|
  month_data = Array.new
  file.each_line do |line|
    if line =~ /^\s*\d+/
      line.scan(/^\s*(\d+)\s*(\d+)\*?\s*(\d+)/) do | day, max, min|
        month_data.push DayData.new(day, min.to_i, max.to_i)
      end
    end
  end
  puts month_data
  puts month_data.min_by { |day| day.delta}
end
