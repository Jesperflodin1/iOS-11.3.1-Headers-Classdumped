/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopyingNSSecureCoding;
@class NSObject, NSOrderedSet, NSDictionary;

@interface NTCatchUpOperationArticleIDsRequest : NSObject <NSCopying> {

	NSObject*<NSCopying>*<NSSecureCoding> _identifier;
	NSOrderedSet* _articleIDs;
	NSDictionary* _overrideHeadlineMetadataByArticleID;

}

@property (nonatomic,copy) NSObject*<NSCopying>*<NSSecureCoding> identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSOrderedSet * articleIDs;                                       //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * overrideHeadlineMetadataByArticleID;              //@synthesize overrideHeadlineMetadataByArticleID=_overrideHeadlineMetadataByArticleID - In the implementation block
-(id)init;
-(NSObject*<NSCopying>*<NSSecureCoding>)identifier;
-(void)setIdentifier:(NSObject*<NSCopying>*<NSSecureCoding>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSOrderedSet *)articleIDs;
-(void)setArticleIDs:(NSOrderedSet *)arg1 ;
-(id)initWithArticleIDs:(id)arg1 overrideHeadlineMetadataByArticleID:(id)arg2 ;
-(NSDictionary *)overrideHeadlineMetadataByArticleID;
-(void)setOverrideHeadlineMetadataByArticleID:(NSDictionary *)arg1 ;
@end

