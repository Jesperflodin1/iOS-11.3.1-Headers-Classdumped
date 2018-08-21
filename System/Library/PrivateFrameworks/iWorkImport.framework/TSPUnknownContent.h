/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSArray;

@interface TSPUnknownContent : NSObject {

	NSArray* _messages;
	NSArray* _ignoreAndPreserveFields;
	NSArray* _ignoreAndDropFields;
	NSArray* _savedIgnoreAndPreserveFields;
	NSArray* _savedIgnoreAndDropFields;

}

@property (nonatomic,readonly) NSArray * messages;              //@synthesize messages=_messages - In the implementation block
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)willModifyObject;
-(void)updateMessageInfo:(MessageInfo*)arg1 ;
-(id)initWithMessages:(id)arg1 ignoreAndPreserveFields:(id)arg2 ignoreAndDropFields:(id)arg3 ;
-(id)init;
-(NSArray *)messages;
@end

