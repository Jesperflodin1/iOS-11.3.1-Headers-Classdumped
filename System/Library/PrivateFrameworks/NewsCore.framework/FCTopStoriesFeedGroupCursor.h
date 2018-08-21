/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSDate, NSArray;

@interface FCTopStoriesFeedGroupCursor : FCFeedGroupEmittingCursor {

	BOOL _collapsed;
	NSDate* _version;
	NSArray* _articleIDs;
	NSDate* _optionalStoriesLastRefreshDate;

}

@property (nonatomic,copy) NSDate * version;                                     //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSArray * articleIDs;                                 //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,copy) NSDate * optionalStoriesLastRefreshDate;              //@synthesize optionalStoriesLastRefreshDate=_optionalStoriesLastRefreshDate - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                  //@synthesize collapsed=_collapsed - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isCollapsed;
-(void)setVersion:(NSDate *)arg1 ;
-(NSDate *)version;
-(NSArray *)articleIDs;
-(void)setArticleIDs:(NSArray *)arg1 ;
-(NSDate *)optionalStoriesLastRefreshDate;
-(void)setOptionalStoriesLastRefreshDate:(NSDate *)arg1 ;
-(void)setCollapsed:(BOOL)arg1 ;
@end

