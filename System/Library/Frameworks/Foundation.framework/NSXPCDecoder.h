/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSXPCCoder.h>

@protocol OS_xpc_object;
@class NSXPCConnection, NSObject;

@interface NSXPCDecoder : NSXPCCoder {

	unsigned long long _genericIndex;
	SCD_Struct_NS70* _decoder;
	NSXPCConnection* _connection;
	/*function pointer*/void** _collections[128];
	SCD_Struct_NS71 _rootObject;
	unsigned _collectionPointer;
	id _allowedClassesList[128];
	long long _allowedClassesIndex;
	NSObject*<OS_xpc_object> _oolObjects;

}

@property (assign) NSXPCConnection * _connection;              //@synthesize connection=_connection - In the implementation block
-(id)_decodeArrayOfObjectsForKey:(id)arg1 ;
-(void)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(BOOL)arg3 ;
-(void)set_connection:(NSXPCConnection *)arg1 ;
-(id)_decodeReplyFromXPCObject:(id)arg1 forSelector:(SEL)arg2 interface:(id)arg3 ;
-(int)_decodeMessageFromXPCObject:(id)arg1 allowingSimpleMessageSend:(BOOL)arg2 outInvocation:(id*)arg3 outArguments:(id*)arg4 outArgumentsMaxCount:(unsigned long long)arg5 outMethodSignature:(id*)arg6 outSelector:(SEL*)arg7 interface:(id)arg8 ;
-(void)_startReadingFromXPCObject:(id)arg1 ;
-(int)__decodeXPCObject:(id)arg1 allowingSimpleMessageSend:(BOOL)arg2 outInvocation:(id*)arg3 outArguments:(id*)arg4 outArgumentsMaxCount:(unsigned long long)arg5 outMethodSignature:(id*)arg6 outSelector:(SEL*)arg7 isReply:(BOOL)arg8 replySelector:(SEL)arg9 interface:(id)arg10 ;
-(id)_decodeObjectOfClasses:(id)arg1 atObject:(SCD_Struct_NS71*)arg2 ;
-(const char*)_decodeCStringForKey:(id)arg1 ;
-(id)decodeXPCObjectForKey:(id)arg1 ;
-(id)init;
-(id)decodeObjectForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(int)decodeIntForKey:(id)arg1 ;
-(BOOL)allowsKeyedCoding;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(id)decodeObject;
-(id)connection;
-(id)decodeXPCObjectOfType:(xpc_type_sRef)arg1 forKey:(id)arg2 ;
-(NSXPCConnection *)_connection;
-(id)allowedClasses;
@end

