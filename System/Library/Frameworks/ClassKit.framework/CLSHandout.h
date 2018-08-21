/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSDate, NSError, NSString, CLSClass, NSArray;

@interface CLSHandout : CLSObject <CLSRelationable> {

	BOOL __reviewed;
	NSDate* _dateOfPublication;
	NSDate* _dateLastReviewed;
	long long _state;
	long long _publishingState;
	NSError* _publishError;
	NSString* __title;
	NSString* __instructions;
	NSDate* __dueDate;

}

@property (nonatomic,readonly) CLSClass * effectiveClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDate * dateOfPublication;                   //@synthesize dateOfPublication=_dateOfPublication - In the implementation block
@property (nonatomic,copy) NSString * _title;                              //@synthesize _title=__title - In the implementation block
@property (nonatomic,copy) NSString * _instructions;                       //@synthesize _instructions=__instructions - In the implementation block
@property (nonatomic,retain) NSDate * _dueDate;                            //@synthesize _dueDate=__dueDate - In the implementation block
@property (assign,nonatomic) BOOL _reviewed;                               //@synthesize _reviewed=__reviewed - In the implementation block
@property (assign,nonatomic) long long state;                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long publishingState;                    //@synthesize publishingState=_publishingState - In the implementation block
@property (nonatomic,retain) NSError * publishError;                       //@synthesize publishError=_publishError - In the implementation block
@property (nonatomic,retain) NSDate * dateLastReviewed;                    //@synthesize dateLastReviewed=_dateLastReviewed - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * instructions; 
@property (nonatomic,retain) NSDate * dueDate; 
@property (nonatomic,readonly) NSArray * recipients; 
@property (nonatomic,readonly) NSArray * attachments; 
@property (assign,getter=isReviewed,nonatomic) BOOL reviewed; 
+(BOOL)supportsSecureCoding;
+(id)relations;
-(NSString *)instructions;
-(void)setInstructions:(NSString *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)_init;
-(NSString *)title;
-(NSString *)_title;
-(id)dictionaryRepresentation;
-(NSArray *)attachments;
-(NSArray *)recipients;
-(void)mergeWithObject:(id)arg1 ;
-(void)setDueDate:(NSDate *)arg1 ;
-(NSDate *)dueDate;
-(BOOL)validateObject:(id*)arg1 ;
-(void)set_title:(NSString *)arg1 ;
-(BOOL)isReviewed;
-(void)setReviewed:(BOOL)arg1 ;
-(void)addHandoutAttachment:(id)arg1 ;
-(void)removeHandoutAttachment:(id)arg1 ;
-(void)addHandoutRecipient:(id)arg1 ;
-(void)removeHandoutRecipient:(id)arg1 ;
-(NSDate *)dateOfPublication;
-(void)setDateOfPublication:(NSDate *)arg1 ;
-(NSDate *)dateLastReviewed;
-(void)setDateLastReviewed:(NSDate *)arg1 ;
-(long long)publishingState;
-(void)setPublishingState:(long long)arg1 ;
-(NSError *)publishError;
-(void)setPublishError:(NSError *)arg1 ;
-(NSString *)_instructions;
-(void)set_instructions:(NSString *)arg1 ;
-(NSDate *)_dueDate;
-(void)set_dueDate:(NSDate *)arg1 ;
-(BOOL)_reviewed;
-(void)set_reviewed:(BOOL)arg1 ;
-(CLSClass *)effectiveClass;
@end

