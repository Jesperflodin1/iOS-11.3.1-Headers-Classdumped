/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, FBSProcessHandle, BSMachPortTaskNameRight;


@protocol FBSProcessIdentity <FBSProcess>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * jobLabel; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,retain,readonly) FBSProcessHandle * handle; 
@property (nonatomic,retain,readonly) BSMachPortTaskNameRight * taskNameRight; 
@required
-(FBSProcessHandle *)handle;
-(NSString *)name;
-(long long)type;
-(NSString *)jobLabel;
-(BSMachPortTaskNameRight *)taskNameRight;

@end

