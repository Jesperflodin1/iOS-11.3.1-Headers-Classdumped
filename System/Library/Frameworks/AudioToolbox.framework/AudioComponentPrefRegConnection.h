/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <AudioToolbox/AudioComponentPreferenceProtocol.h>

@interface AudioComponentPrefRegConnection : NSObject <AudioComponentPreferenceProtocol> {

	AudioComponentRegistrarImpl* mImpl;
	ConnectionInfo mConnInfo;

}
-(void)setExtensionComponentList:(id)arg1 linkedSDKVersion:(int)arg2 components:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)getExtensionComponentList:(id)arg1 linkedSDKVersion:(int)arg2 reply:(/*^block*/id)arg3 ;
-(void)getComponentUserTags:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setComponentUserTags:(id)arg1 tags:(id)arg2 ;
-(void)getExtensionIcon:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getInterAppIcon:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithRegistrar:(AudioComponentRegistrarImpl*)arg1 connection:(id)arg2 ;
@end

