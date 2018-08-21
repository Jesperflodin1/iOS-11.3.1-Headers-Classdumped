/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface FCFeedGroupDiff : NSObject {

	NSString* _groupIdentifier;
	NSArray* _insertedElements;
	NSArray* _deletedElements;
	NSArray* _modifiedElements;
	NSArray* _insertedHeadlines;
	NSArray* _deletedHeadlines;
	NSArray* _modifiedHeadlines;

}

@property (nonatomic,copy,readonly) NSString * groupIdentifier;               //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * insertedElements;               //@synthesize insertedElements=_insertedElements - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deletedElements;                //@synthesize deletedElements=_deletedElements - In the implementation block
@property (nonatomic,copy,readonly) NSArray * modifiedElements;               //@synthesize modifiedElements=_modifiedElements - In the implementation block
@property (nonatomic,copy,readonly) NSArray * insertedHeadlines;              //@synthesize insertedHeadlines=_insertedHeadlines - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deletedHeadlines;               //@synthesize deletedHeadlines=_deletedHeadlines - In the implementation block
@property (nonatomic,copy,readonly) NSArray * modifiedHeadlines;              //@synthesize modifiedHeadlines=_modifiedHeadlines - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
-(NSString *)groupIdentifier;
-(id)init;
-(BOOL)isEmpty;
-(id)initWithGroupIdentifier:(id)arg1 insertedElements:(id)arg2 deletedElements:(id)arg3 modifiedElements:(id)arg4 ;
-(NSArray *)insertedElements;
-(NSArray *)deletedElements;
-(NSArray *)modifiedHeadlines;
-(NSArray *)modifiedElements;
-(NSArray *)insertedHeadlines;
-(NSArray *)deletedHeadlines;
@end

