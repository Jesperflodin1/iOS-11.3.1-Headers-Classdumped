/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol _PASAssetProtocol <NSObject>
@property (nonatomic,readonly) unsigned long long assetVersion; 
@property (nonatomic,readonly) NSString * assetType; 
@property (nonatomic,readonly) unsigned long long compatibilityVersion; 
@property (nonatomic,readonly) unsigned long long bestAssetVersionObserved; 
@required
-(unsigned long long)bestAssetVersionObserved;
-(NSString *)assetType;
-(BOOL)deregisterUpdateHandlerAsyncWithToken:(id)arg1;
-(id)registerUpdateHandler:(/*^block*/id)arg1;
-(id)pathForResourceWithName:(id)arg1 extension:(id)arg2;
-(unsigned long long)assetVersion;
-(unsigned long long)compatibilityVersion;

@end

