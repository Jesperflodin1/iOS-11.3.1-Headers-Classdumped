/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@interface RadioLoadStoreBagRequest : RadioRequest {

	BOOL _ignoresRadioDiskCache;

}

@property (assign,nonatomic) BOOL ignoresRadioDiskCache;              //@synthesize ignoresRadioDiskCache=_ignoresRadioDiskCache - In the implementation block
+(void)_urlBagDidLoadNotification:(id)arg1 ;
+(id)_cachedStoreBagForActiveAccount;
+(void)_writeStoreBagToDiskCache:(id)arg1 ;
+(id)_cachedBagFilenameForActiveAccount;
+(id)_pathForCachedStoreBags;
+(id)_accessQueue;
-(void)_handleFinishedLoadingBag:(id)arg1 withError:(id)arg2 didLoadFromNonDiskCache:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)ignoresRadioDiskCache;
-(void)setIgnoresRadioDiskCache:(BOOL)arg1 ;
-(void)loadStoreBagWithOptions:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

