Pod::Spec.new do |s|
  s.name = 'eStatSDK-iOS'
  s.version = '5.4.5'
  s.license = { :type => 'MIT', :file => 'LICENSE' }
  s.platform = :ios
  s.summary = 'eStat iOS SDK'
  s.homepage = 'https://github.com/MediametrieDev/eStatSDK-iOS'
  s.authors = { 'Support' => 'support-mesure@mediametrie.fr' }
  s.source = { :git => 'https://github.com/MediametrieDev/eStatSDK-iOS.git', :tag => s.version }
  s.ios.deployment_target = '8.0'
  s.pod_target_xcconfig = { 'OTHER_CFLAGS' => '-fembed-bitcode' }
  s.ios.vendored_frameworks = 'eStat_iOS.framework'
end
