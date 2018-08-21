/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class SKUIClientContext, SKUIColorScheme, NSString, SKUILayoutCache;

@interface SKUIProductPageTableTextBoxSection : SKUIProductPageTableSection {

	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	BOOL _isExpanded;
	long long _stringIndex;
	NSString* _subtitle;
	SKUILayoutCache* _textLayoutCache;
	NSString* _title;

}

@property (nonatomic,retain) SKUILayoutCache * textLayoutCache;              //@synthesize textLayoutCache=_textLayoutCache - In the implementation block
@property (assign,nonatomic) long long stringIndex;                          //@synthesize stringIndex=_stringIndex - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme;                  //@synthesize colorScheme=_colorScheme - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)initWithClientContext:(id)arg1 ;
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(SKUILayoutCache *)textLayoutCache;
-(void)setTextLayoutCache:(SKUILayoutCache *)arg1 ;
-(id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(long long)stringIndex;
-(void)setStringIndex:(long long)arg1 ;
@end

