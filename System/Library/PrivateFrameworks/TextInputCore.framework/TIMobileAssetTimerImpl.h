/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface TIMobileAssetTimerImpl : NSObject {

	/*^block*/id _expirationHandler;
	NSTimer* _assetTimer;

}
+(id)nextFireDateForDate:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(id)initWithExpirationHandler:(/*^block*/id)arg1 ;
-(void)assetTimerFired;
-(void)updateAssetTimer;
@end

