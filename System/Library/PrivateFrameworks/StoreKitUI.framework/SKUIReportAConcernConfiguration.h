/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSArray;

@interface SKUIReportAConcernConfiguration : NSObject <NSCopying> {

	NSURL* _reportConcernURL;
	long long _itemIdentifier;
	NSString* _reportConcernExplanation;
	NSString* _selectReasonTitle;
	NSString* _selectReasonSubtitle;
	NSString* _privacyNote;
	NSArray* _reasons;

}

@property (nonatomic,copy) NSURL * reportConcernURL;                         //@synthesize reportConcernURL=_reportConcernURL - In the implementation block
@property (assign,nonatomic) long long itemIdentifier;                       //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * reportConcernExplanation;              //@synthesize reportConcernExplanation=_reportConcernExplanation - In the implementation block
@property (nonatomic,copy) NSString * selectReasonTitle;                     //@synthesize selectReasonTitle=_selectReasonTitle - In the implementation block
@property (nonatomic,copy) NSString * selectReasonSubtitle;                  //@synthesize selectReasonSubtitle=_selectReasonSubtitle - In the implementation block
@property (nonatomic,copy) NSString * privacyNote;                           //@synthesize privacyNote=_privacyNote - In the implementation block
@property (nonatomic,copy) NSArray * reasons;                                //@synthesize reasons=_reasons - In the implementation block
+(id)configurationWithTemplateElement:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)reasons;
-(void)setReasons:(NSArray *)arg1 ;
-(long long)itemIdentifier;
-(void)setItemIdentifier:(long long)arg1 ;
-(NSURL *)reportConcernURL;
-(void)setReportConcernURL:(NSURL *)arg1 ;
-(NSString *)selectReasonTitle;
-(void)setSelectReasonTitle:(NSString *)arg1 ;
-(NSString *)selectReasonSubtitle;
-(void)setSelectReasonSubtitle:(NSString *)arg1 ;
-(NSString *)reportConcernExplanation;
-(void)setReportConcernExplanation:(NSString *)arg1 ;
-(void)setPrivacyNote:(NSString *)arg1 ;
-(NSString *)privacyNote;
@end

