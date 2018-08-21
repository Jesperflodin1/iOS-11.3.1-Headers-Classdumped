/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUIImageResource.h>

@class NSString, SAUIDecoratedText;

@interface SAUINanoImageResource : SAUIImageResource

@property (assign,nonatomic) BOOL backgroundNeeded; 
@property (nonatomic,copy) NSString * imageDownloadType; 
@property (nonatomic,retain) SAUIDecoratedText * monogram; 
@property (nonatomic,copy) NSString * placeholderImage; 
+(id)nanoImageResource;
+(id)nanoImageResourceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setPlaceholderImage:(NSString *)arg1 ;
-(NSString *)placeholderImage;
-(id)encodedClassName;
-(BOOL)backgroundNeeded;
-(void)setBackgroundNeeded:(BOOL)arg1 ;
-(NSString *)imageDownloadType;
-(void)setImageDownloadType:(NSString *)arg1 ;
-(SAUIDecoratedText *)monogram;
-(void)setMonogram:(SAUIDecoratedText *)arg1 ;
@end
