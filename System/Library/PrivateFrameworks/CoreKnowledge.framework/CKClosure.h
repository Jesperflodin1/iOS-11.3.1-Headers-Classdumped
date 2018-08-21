/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class CKKnowledgeStore, CKEntity, NSString;

@interface CKClosure : NSObject <NSCoding> {

	 store;
	 entity;

}

@property (readonly,nonatomic) CKKnowledgeStore * store; 
@property (readonly,nonatomic) CKEntity * entity; 
@property (readonly,nonatomic) NSString * identifier; 
-(CKEntity *)entity;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(CKKnowledgeStore *)store;
-(void)execute;
@end

