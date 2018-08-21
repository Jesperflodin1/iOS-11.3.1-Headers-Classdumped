/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CLIntersiloRecordingProxy.h>

@class CLIntersiloRecordingProxy;

@interface CLIntersiloRecordingProxyToInitiator : CLIntersiloRecordingProxy {

	CLIntersiloRecordingProxy* _peer;

}

@property (nonatomic,__weak,readonly) CLIntersiloRecordingProxy * peer;              //@synthesize peer=_peer - In the implementation block
-(id)initWithProxiedInterface:(id)arg1 delegateObject:(id)arg2 delegateSilo:(id)arg3 andUninitializedPeer:(id)arg4 ;
-(CLIntersiloRecordingProxy *)peer;
@end

