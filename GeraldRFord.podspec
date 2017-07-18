Pod::Spec.new do |s|
  s.name         = "GeraldRFord"
  s.version      = "1.0.1"
  s.summary      = "工具合集"
  s.description  = <<-DESC
                        把项目的不同功能拆分出来，便于复用
                   DESC
  s.homepage     = "https://github.com/YRDGroup/GeraldRFord"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "Agoer" => "https://github.com/Agoer" }
  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://github.com/YRDGroup/GeraldRFord.git",  :branch => "master", :tag => "1.0.0" }
  s.source_files  = "GeraldRFord", "GeraldRFord/**/*.{h,m}"
  s.requires_arc = true
  s.dependency "GJAlertController"
end
