/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCHeadlineMetadata.h>

@class NSDate, NSString, NSDictionary;

@interface FCArticleMetadata : NSObject <FCHeadlineMetadata> {

	NSDictionary* _dictionary;
	NSDate* _displayDate;

}

@property (nonatomic,retain) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) NSDate * displayDate;                   //@synthesize displayDate=_displayDate - In the implementation block
@property (nonatomic,readonly) NSString * articleID; 
@property (nonatomic,readonly) BOOL isTreatedAsNew; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * storyType; 
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSString *)articleID;
-(NSDate *)displayDate;
-(NSString *)storyType;
-(void)setDisplayDate:(NSDate *)arg1 ;
-(BOOL)isTreatedAsNew;
@end

