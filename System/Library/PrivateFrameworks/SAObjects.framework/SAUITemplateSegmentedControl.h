/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSDictionary, NSArray;

@interface SAUITemplateSegmentedControl : SAUITemplateBaseItem

@property (nonatomic,copy) NSDictionary * backgroundColors; 
@property (nonatomic,copy) NSDictionary * textColors; 
@property (nonatomic,copy) NSArray * titles; 
+(id)segmentedControl;
+(id)segmentedControlWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTitles:(NSArray *)arg1 ;
-(NSArray *)titles;
-(id)encodedClassName;
-(NSDictionary *)textColors;
-(void)setTextColors:(NSDictionary *)arg1 ;
-(NSDictionary *)backgroundColors;
-(void)setBackgroundColors:(NSDictionary *)arg1 ;
@end

