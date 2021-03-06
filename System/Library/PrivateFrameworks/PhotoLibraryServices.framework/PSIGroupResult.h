/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class PSIDatabase, NSObject, NSString, NSMutableArray, NSArray;

@interface PSIGroupResult : NSObject <NSCopying> {

	PSIDatabase* _idx;
	PSIDatabase* _heldIdx;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _owningContentString;
	NSMutableArray* _assetUUIDs;
	BOOL _didFetchOwningContentString;
	float _score;
	NSArray* _searchTokens;
	PSIGroupResult* _additionalGroupResult;
	NSArray* _groups;
	CFArrayRef _assetIds;

}

@property (nonatomic,copy) NSArray * groups;                                      //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain) CFArrayRef assetIds;                                 //@synthesize assetIds=_assetIds - In the implementation block
@property (assign,nonatomic) float score;                                         //@synthesize score=_score - In the implementation block
@property (assign,nonatomic,__weak) PSIDatabase * idx;                            //@synthesize idx=_idx - In the implementation block
@property (nonatomic,retain) NSArray * searchTokens;                              //@synthesize searchTokens=_searchTokens - In the implementation block
@property (nonatomic,retain,readonly) NSArray * contentStrings; 
@property (nonatomic,retain,readonly) NSArray * matchRanges; 
@property (nonatomic,retain) PSIGroupResult * additionalGroupResult;              //@synthesize additionalGroupResult=_additionalGroupResult - In the implementation block
@property (nonatomic,readonly) unsigned long long matchCount; 
@property (readonly) NSString * owningContentString; 
@property (readonly) NSArray * assetUUIDs; 
-(void)setScore:(float)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)groups;
-(void)setGroups:(NSArray *)arg1 ;
-(id)unitTestDescription;
-(CFArrayRef)assetIds;
-(void)setAssetIds:(CFArrayRef)arg1 ;
-(void)setIdx:(PSIDatabase *)arg1 ;
-(void)setSearchTokens:(NSArray *)arg1 ;
-(void)setAdditionalGroupResult:(PSIGroupResult *)arg1 ;
-(id)_prepareForFetchWithCount:(unsigned long long)arg1 outRange:(NSRange*)arg2 outFetchOwningContentString:(BOOL*)arg3 ;
-(PSIDatabase *)idx;
-(NSArray *)contentStrings;
-(NSArray *)searchTokens;
-(NSArray *)matchRanges;
-(long long)categoryAtIndex:(long long)arg1 ;
-(unsigned long long)tokenCount;
-(NSString *)owningContentString;
-(NSArray *)assetUUIDs;
-(void)fetchNextAssetUUIDs:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(PSIGroupResult *)additionalGroupResult;
-(float)score;
-(unsigned long long)matchCount;
@end

