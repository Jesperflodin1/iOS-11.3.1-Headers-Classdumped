/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface CLSChecklistItem : NSObject {

	BOOL _checked;
	int _value;
	int _goal;
	NSString* _title;
	NSString* _subtitle;
	NSURL* _actionURL;

}

@property (nonatomic,retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                        //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,getter=isChecked,nonatomic) BOOL checked;              //@synthesize checked=_checked - In the implementation block
@property (assign,nonatomic) int value;                                  //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) int goal;                                   //@synthesize goal=_goal - In the implementation block
@property (nonatomic,retain) NSURL * actionURL;                          //@synthesize actionURL=_actionURL - In the implementation block
+(id)checklistItemWithTitle:(id)arg1 subtitle:(id)arg2 rate:(id)arg3 threshold:(float)arg4 actionURL:(id)arg5 ;
+(id)checklistItemWithTitle:(id)arg1 subtitle:(id)arg2 checked:(BOOL)arg3 value:(int)arg4 goal:(int)arg5 actionURL:(id)arg6 ;
+(id)checklistItem;
-(void)setChecked:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setValue:(int)arg1 ;
-(int)value;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(BOOL)isChecked;
-(NSURL *)actionURL;
-(void)setActionURL:(NSURL *)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 checked:(BOOL)arg3 value:(int)arg4 goal:(int)arg5 actionURL:(id)arg6 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 rate:(id)arg3 threshold:(float)arg4 actionURL:(id)arg5 ;
-(int)goal;
-(void)setGoal:(int)arg1 ;
@end

