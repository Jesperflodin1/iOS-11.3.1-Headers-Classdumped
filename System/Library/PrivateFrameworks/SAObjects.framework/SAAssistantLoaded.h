/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber, NSArray;

@interface SAAssistantLoaded : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * dataAnchor; 
@property (nonatomic,copy) NSNumber * requestSync; 
@property (nonatomic,copy) NSArray * syncAnchors; 
@property (nonatomic,copy) NSString * version; 
+(id)assistantLoaded;
+(id)assistantLoadedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)dataAnchor;
-(void)setDataAnchor:(NSString *)arg1 ;
-(NSNumber *)requestSync;
-(void)setRequestSync:(NSNumber *)arg1 ;
-(NSArray *)syncAnchors;
-(void)setSyncAnchors:(NSArray *)arg1 ;
@end
