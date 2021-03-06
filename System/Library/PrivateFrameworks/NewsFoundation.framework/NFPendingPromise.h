/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NFPromise;

@interface NFPendingPromise : NSObject {

	NFPromise* _promise;
	/*^block*/id _resolve;
	/*^block*/id _reject;

}

@property (nonatomic,retain) NFPromise * promise;              //@synthesize promise=_promise - In the implementation block
@property (nonatomic,copy) id resolve;                         //@synthesize resolve=_resolve - In the implementation block
@property (nonatomic,copy) id reject;                          //@synthesize reject=_reject - In the implementation block
-(id)init;
-(id)resolve;
-(void)setPromise:(NFPromise *)arg1 ;
-(id)reject;
-(void)setResolve:(id)arg1 ;
-(void)setReject:(id)arg1 ;
-(NFPromise *)promise;
@end

