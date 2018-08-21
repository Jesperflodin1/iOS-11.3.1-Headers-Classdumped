/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSDateFormatter, NSString;

@interface SUScriptDateFormatter : SUScriptObject {

	NSDateFormatter* _dateFormatter;

}

@property (copy) NSString * dateFormat; 
@property (assign) unsigned long long dateStyle; 
@property (copy) NSString * localeIdentifier; 
@property (assign) unsigned long long timeStyle; 
@property (readonly) unsigned long long dateFormatterFullStyle; 
@property (readonly) unsigned long long dateFormatterLongStyle; 
@property (readonly) unsigned long long dateFormatterMediumStyle; 
@property (readonly) unsigned long long dateFormatterNoStyle; 
@property (readonly) unsigned long long dateFormatterShortStyle; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(id)attributeKeys;
-(id)init;
-(void)dealloc;
-(void)setDateFormat:(NSString *)arg1 ;
-(NSString *)localeIdentifier;
-(id)stringFromDate:(id)arg1 ;
-(void)setDateStyle:(unsigned long long)arg1 ;
-(void)setTimeStyle:(unsigned long long)arg1 ;
-(double)dateFromString:(id)arg1 ;
-(unsigned long long)dateFormatterFullStyle;
-(unsigned long long)dateFormatterLongStyle;
-(unsigned long long)dateFormatterMediumStyle;
-(unsigned long long)dateFormatterNoStyle;
-(unsigned long long)dateFormatterShortStyle;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(NSString *)dateFormat;
-(unsigned long long)dateStyle;
-(unsigned long long)timeStyle;
@end

