/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface ASReportAConcernConfiguration : NSObject <NSCopying> {

	/*^block*/id _completion;
	NSString* _title;
	NSString* _backTitle;
	NSString* _cancelTitle;
	NSString* _submitTitle;
	NSString* _reportConcernExplanation;
	NSString* _selectReasonTitle;
	NSString* _selectReasonSubtitle;
	NSString* _privacyNote;
	NSArray* _reasons;

}

@property (nonatomic,copy) id completion;                                    //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * backTitle;                             //@synthesize backTitle=_backTitle - In the implementation block
@property (nonatomic,copy) NSString * cancelTitle;                           //@synthesize cancelTitle=_cancelTitle - In the implementation block
@property (nonatomic,copy) NSString * submitTitle;                           //@synthesize submitTitle=_submitTitle - In the implementation block
@property (nonatomic,copy) NSString * reportConcernExplanation;              //@synthesize reportConcernExplanation=_reportConcernExplanation - In the implementation block
@property (nonatomic,copy) NSString * selectReasonTitle;                     //@synthesize selectReasonTitle=_selectReasonTitle - In the implementation block
@property (nonatomic,copy) NSString * selectReasonSubtitle;                  //@synthesize selectReasonSubtitle=_selectReasonSubtitle - In the implementation block
@property (nonatomic,copy) NSString * privacyNote;                           //@synthesize privacyNote=_privacyNote - In the implementation block
@property (nonatomic,copy) NSArray * reasons;                                //@synthesize reasons=_reasons - In the implementation block
-(void)setBackTitle:(NSString *)arg1 ;
-(void)setCancelTitle:(NSString *)arg1 ;
-(NSString *)submitTitle;
-(void)setSubmitTitle:(NSString *)arg1 ;
-(NSString *)backTitle;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(NSArray *)reasons;
-(void)setReasons:(NSArray *)arg1 ;
-(NSString *)cancelTitle;
-(NSString *)selectReasonTitle;
-(void)setSelectReasonTitle:(NSString *)arg1 ;
-(NSString *)selectReasonSubtitle;
-(void)setSelectReasonSubtitle:(NSString *)arg1 ;
-(NSString *)reportConcernExplanation;
-(void)setReportConcernExplanation:(NSString *)arg1 ;
-(void)setPrivacyNote:(NSString *)arg1 ;
-(NSString *)privacyNote;
@end

