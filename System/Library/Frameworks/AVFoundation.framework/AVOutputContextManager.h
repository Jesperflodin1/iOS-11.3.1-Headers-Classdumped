/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVOutputContextManagerInternal;

@interface AVOutputContextManager : NSObject {

	AVOutputContextManagerInternal* _ivars;

}
+(id)outputContextManagerForAllOutputContexts;
-(id)initWithOutputContextManagerImpl:(id)arg1 ;
-(void)outputContextManagerImplDidExpireWithReplacementImpl:(id)arg1 ;
-(void)outputContextManagerImpl:(id)arg1 observedFailureToConnectToOutputDevice:(id)arg2 reason:(id)arg3 ;
-(void)dealloc;
@end

