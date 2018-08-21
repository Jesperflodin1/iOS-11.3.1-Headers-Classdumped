/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface PKPickerSection : NSObject {

	NSString* _title;
	NSString* _footer;
	NSMutableArray* _items;

}

@property (nonatomic,copy) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * footer;                     //@synthesize footer=_footer - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;              //@synthesize items=_items - In the implementation block
+(id)sectionWithTitle:(id)arg1 footer:(id)arg2 ;
+(id)sectionWithTitle:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
@end

