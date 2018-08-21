/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXAddition.h>

@class NSString, NSURL, SXFormattedText;

@interface SXCalendarEventAddition : SXAddition

@property (nonatomic,readonly) NSString * startDate; 
@property (nonatomic,readonly) NSString * endDate; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * location; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) SXFormattedText * notes; 
+(id)typeString;
-(SXFormattedText *)notes;
-(NSURL *)URL;
-(NSString *)location;
-(NSString *)title;
-(NSString *)endDate;
-(NSString *)startDate;
-(id)URLWithValue:(id)arg1 withType:(int)arg2 ;
-(id)notesWithValue:(id)arg1 withType:(int)arg2 ;
@end

