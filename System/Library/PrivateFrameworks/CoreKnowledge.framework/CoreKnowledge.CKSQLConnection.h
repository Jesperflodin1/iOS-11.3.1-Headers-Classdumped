/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CoreKnowledge.CKSQLConnection : NSObject {

	 _handle;
	 path;
	 queue;
	 queueContext.storage;

}

@property (readonly,nonatomic) void* handle; 
@property (readonly,nonatomic) NSString * path; 
@property (readonly,nonatomic) BOOL readonly; 
@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) long long changes; 
@property (readonly,nonatomic) long long totalChanges; 
-(void)interrupt;
-(void)closeConnection;
-(void*)handle;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)path;
-(BOOL)readonly;
-(id)initWithReadonlyFlag:(BOOL)arg1 error:(id*)arg2 ;
-(id)init:(id)arg1 readonly:(BOOL)arg2 error:(id*)arg3 ;
-(long long)totalChanges;
-(BOOL)execute:(id)arg1 error:(id*)arg2 ;
-(long long)changes;
@end

