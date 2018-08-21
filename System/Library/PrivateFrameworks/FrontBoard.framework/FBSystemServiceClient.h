/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBProcess;


@protocol FBSystemServiceClient <NSObject>
@property (nonatomic,readonly) int pid; 
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (nonatomic,retain,readonly) FBProcess * process; 
@property (nonatomic,retain,readonly) NSObject*<OS_xpc_object> connection; 
@property (nonatomic,retain) id<FBSystemServiceFacilityClient> facilityClient; 
@required
-(FBProcess *)process;
-(BOOL)isSuspended;
-(NSObject*<OS_xpc_object>)connection;
-(id<FBSystemServiceFacilityClient>)facilityClient;
-(void)setFacilityClient:(id)arg1;
-(int)pid;

@end

