/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableIndexSet, NSMutableArray, NSMutableDictionary, NSIndexSet, NSArray;

@interface APTPRequestDataPacket : NSObject {

	unsigned short _operationCode;
	NSMutableIndexSet* _operationCommands;
	NSMutableArray* _objectHandles;
	NSMutableDictionary* _operationCommandParamaters;

}

@property (readonly) unsigned short operationCode;                     //@synthesize operationCode=_operationCode - In the implementation block
@property (copy,readonly) NSIndexSet * operationCommands;              //@synthesize operationCommands=_operationCommands - In the implementation block
@property (copy,readonly) NSArray * objectHandles;                     //@synthesize objectHandles=_objectHandles - In the implementation block
@property (readonly) unsigned long long objectCount; 
@property (readonly) unsigned short commandCount; 
-(id)init;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)content;
-(unsigned short)commandCount;
-(void)clearCommands;
-(unsigned short)operationCode;
-(NSIndexSet *)operationCommands;
-(void)addObjectHandle:(unsigned)arg1 ;
-(void)clearObjectHandles;
-(NSArray *)objectHandles;
-(unsigned long long)objectCount;
-(void)addCommand:(id)arg1 ;
-(id)initWithContent:(id)arg1 ;
@end

