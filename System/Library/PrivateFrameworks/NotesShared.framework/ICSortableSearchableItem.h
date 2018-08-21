/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CSSearchableItem, NSDate;

@interface ICSortableSearchableItem : NSObject {

	CSSearchableItem* _searchableItem;
	double _rankingScore;
	unsigned long long _relevanceBitField;
	NSDate* _modificationDate;
	NSDate* _creationDate;

}

@property (nonatomic,retain) CSSearchableItem * searchableItem;                 //@synthesize searchableItem=_searchableItem - In the implementation block
@property (assign,nonatomic) double rankingScore;                               //@synthesize rankingScore=_rankingScore - In the implementation block
@property (assign,nonatomic) unsigned long long relevanceBitField;              //@synthesize relevanceBitField=_relevanceBitField - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate;                         //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                             //@synthesize creationDate=_creationDate - In the implementation block
+(id)sortDescriptorsForICSearchResults;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSDate *)modificationDate;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(CSSearchableItem *)searchableItem;
-(id)initWithSearchableItem:(id)arg1 rankingScore:(double)arg2 relevanceBitField:(unsigned long long)arg3 ;
-(void)setSearchableItem:(CSSearchableItem *)arg1 ;
-(void)setRankingScore:(double)arg1 ;
-(void)setRelevanceBitField:(unsigned long long)arg1 ;
-(double)rankingScore;
-(unsigned long long)relevanceBitField;
@end

