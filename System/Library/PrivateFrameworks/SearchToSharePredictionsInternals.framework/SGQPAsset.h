/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SearchToSharePredictionsInternals/SearchToSharePredictionsInternals-Structs.h>
@class _PASAsset, NSString;

@interface SGQPAsset : NSObject {

	_PASAsset* _asset;
	NSString* _language;
	NSString* _abGroup;

}

@property (nonatomic,readonly) unsigned long long assetVersion; 
@property (nonatomic,readonly) NSString * language;                          //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) NSString * abGroup;                           //@synthesize abGroup=_abGroup - In the implementation block
-(NSDictionary*)weights;
-(NSString *)language;
-(NSString *)abGroup;
-(id)categoriesModelPath;
-(id)_pathForResourceWithName:(id)arg1 extension:(id)arg2 ;
-(id)_readPlistFromPath:(id)arg1 property:(id)arg2 ;
-(id)_readPlist:(id)arg1 property:(id)arg2 ;
-(id)_readOptionalPlist:(id)arg1 property:(id)arg2 ;
-(id)initWithAsset:(id)arg1 language:(id)arg2 abGroup:(id)arg3 ;
-(id)emotivePhrases;
-(id)phraseBookPath;
-(id)trackedSessionsPhraseMap;
-(unsigned long long)assetVersion;
@end
