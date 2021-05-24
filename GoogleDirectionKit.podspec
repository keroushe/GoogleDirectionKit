#
# Be sure to run `pod lib lint GoogleDirectionKit.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'GoogleDirectionKit' # 组件名称
  s.version          = '0.1.3' # 版本号
  s.summary          = '[iOS]Library for Google Direction API for Google Maps Android API v2' # 简单描述

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

# 详细描述
  s.description      = <<-DESC
  [iOS]Library for Google Direction API for Google Maps Android API v2
                       DESC

  s.homepage         = 'https://github.com/keroushe/GoogleDirectionKit'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'keroushe' => '935823671@qq.com' }
  s.source           = { :git => 'https://github.com/keroushe/GoogleDirectionKit.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '10.0'

  # 组件中代码问价路径
  s.source_files = 'GoogleDirectionKit/Classes/**/*'
  
  # s.resource_bundles = {
  #   'GoogleDirectionKit' => ['GoogleDirectionKit/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  s.dependency 'MJExtension'
  s.requires_arc = true
end
