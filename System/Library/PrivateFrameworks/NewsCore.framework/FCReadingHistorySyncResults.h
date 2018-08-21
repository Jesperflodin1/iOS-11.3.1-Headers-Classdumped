/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FCReadingHistorySyncResults : NSObject {

	NSArray* _modifiedArticleIDs;
	NSArray* _deletedArticleIDs;
	NSArray* _newlyCreatedArticleIDs;

}

@property (nonatomic,retain) NSArray * modifiedArticleIDs;                  //@synthesize modifiedArticleIDs=_modifiedArticleIDs - In the implementation block
@property (nonatomic,retain) NSArray * deletedArticleIDs;                   //@synthesize deletedArticleIDs=_deletedArticleIDs - In the implementation block
@property (nonatomic,retain) NSArray * newlyCreatedArticleIDs;              //@synthesize newlyCreatedArticleIDs=_newlyCreatedArticleIDs - In the implementation block
-(id)initWithModifiedArticleIDs:(id)arg1 deletedArticleIDs:(id)arg2 newArticleIDs:(id)arg3 ;
-(NSArray *)modifiedArticleIDs;
-(void)setModifiedArticleIDs:(NSArray *)arg1 ;
-(NSArray *)deletedArticleIDs;
-(void)setDeletedArticleIDs:(NSArray *)arg1 ;
-(NSArray *)newlyCreatedArticleIDs;
-(void)setNewlyCreatedArticleIDs:(NSArray *)arg1 ;
@end

