/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreNFC/CoreNFC-Structs.h>
#import <libobjc.A.dylib/NFCTag.h>

@protocol NFCTag <NSObject,NSSecureCoding,NSCopying>
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,__weak,readonly) id<NFCReaderSession> session; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@required
-(unsigned long long)type;
-(id<NFCReaderSession>)session;
-(BOOL)isAvailable;

@end


@protocol NFTag;
@class NFWeakReference, NSData, NSString;

@interface NFCTag : NSObject <NFCTag> {

	id<NFTag> _tag;
	NFWeakReference* _session;

}

@property (nonatomic,retain,readonly) NSData * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,__weak,readonly) id<NFCReaderSession> session; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)_MaxRetry;
+(double)_MaxRetryInterval;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSData *)identifier;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NFCReaderSession>)session;
-(void)_setSession:(id)arg1 ;
-(void)_setTag:(id)arg1 ;
-(BOOL)isAvailable;
-(id)_getInternalReaderSession;
-(id)initWithSession:(id)arg1 tag:(id)arg2 ;
-(BOOL)_connectWithError:(id*)arg1 ;
-(BOOL)_disconnectWithError:(id*)arg1 ;
-(BOOL)_transceiveWithData:(id)arg1 receivedData:(id*)arg2 error:(id*)arg3 ;
@end

