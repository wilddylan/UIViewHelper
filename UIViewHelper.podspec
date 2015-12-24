#
# Be sure to run `pod lib lint UIViewHelper.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
s.name             = "UIViewHelper"
s.version          = "0.3.0"
s.summary          = "UIView category"
s.description      = "UIView category, bage, animation, add subView with animation."
s.homepage         = "https://github.com/WildDylan/UIViewHelper"
s.license          = 'MIT'
s.author           = { "Dylan" => "3664132@163.com" }
s.source           = { :git => "https://github.com/WildDylan/UIViewHelper.git", :tag => s.version.to_s }
s.platform     = :ios, '7.0'
s.requires_arc = true
s.source_files = 'Pod/Classes/**/*'
s.resource_bundles = {
'UIViewHelper' => ['Pod/Assets/*.png']
}
# s.public_header_files = 'Pod/Classes/**/*.h'
s.frameworks = 'UIKit', 'MapKit', 'QuartzCore'
end
