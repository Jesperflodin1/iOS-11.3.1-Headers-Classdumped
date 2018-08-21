/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SACFClientFlowUpdateScriptsCommand : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * scripts; 
+(id)clientFlowUpdateScriptsCommand;
+(id)clientFlowUpdateScriptsCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setScripts:(NSArray *)arg1 ;
-(NSArray *)scripts;
@end

