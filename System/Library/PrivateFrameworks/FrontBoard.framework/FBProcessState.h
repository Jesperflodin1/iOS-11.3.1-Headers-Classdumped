/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBProcessState : NSObject <BSDescriptionProviding, NSCopying> {

	int _pid;
	BOOL _running;
	BOOL _foreground;
	int _taskState;
	int _visibility;
	int _effectiveVisibility;

}

@property (assign,nonatomic) int pid;                                          //@synthesize pid=_pid - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                    //@synthesize running=_running - In the implementation block
@property (assign,getter=isForeground,nonatomic) BOOL foreground;              //@synthesize foreground=_foreground - In the implementation block
@property (assign,nonatomic) int taskState;                                    //@synthesize taskState=_taskState - In the implementation block
@property (assign,nonatomic) int visibility;                                   //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) int effectiveVisibility;                          //@synthesize effectiveVisibility=_effectiveVisibility - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPid:(int)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(BOOL)isRunning;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(void)setForeground:(BOOL)arg1 ;
-(int)visibility;
-(void)setVisibility:(int)arg1 ;
-(id)initWithPid:(int)arg1 ;
-(void)setEffectiveVisibility:(int)arg1 ;
-(int)effectiveVisibility;
-(int)pid;
-(BOOL)isForeground;
-(int)taskState;
-(void)setTaskState:(int)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

