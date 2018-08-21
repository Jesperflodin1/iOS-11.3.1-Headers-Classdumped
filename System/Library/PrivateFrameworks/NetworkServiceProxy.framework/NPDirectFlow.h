/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <libobjc.A.dylib/NSPConnectionInfoSource.h>

@class NSNumber, NSPConnectionInfo, NSDate;

@interface NPDirectFlow : NSObject <NSPConnectionInfoSource> {

	nw_protocol* _protocol;
	NSNumber* _identifier;
	NSPConnectionInfo* _connectionInfo;
	NSDate* _startDate;
	NSDate* _connectionStartDate;
	NSDate* _firstTxByteTimestamp;

}

@property (readonly) NSNumber * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (readonly) nw_protocol* protocol; 
@property (retain) NSPConnectionInfo * connectionInfo;              //@synthesize connectionInfo=_connectionInfo - In the implementation block
@property (readonly) NSDate * startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * connectionStartDate;                    //@synthesize connectionStartDate=_connectionStartDate - In the implementation block
@property (retain) NSDate * firstTxByteTimestamp;                   //@synthesize firstTxByteTimestamp=_firstTxByteTimestamp - In the implementation block
+(void)initializeProtocol;
-(NSNumber *)identifier;
-(nw_protocol*)protocol;
-(id)initWithParameters:(id)arg1 ;
-(NSDate *)firstTxByteTimestamp;
-(void)handleDetachedFromProtocol;
-(void)createConnectionInfo;
-(NSDate *)connectionStartDate;
-(void)copyConnectionInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConnectionStartDate:(NSDate *)arg1 ;
-(void)setFirstTxByteTimestamp:(NSDate *)arg1 ;
-(void)setConnectionInfo:(NSPConnectionInfo *)arg1 ;
-(NSPConnectionInfo *)connectionInfo;
-(NSDate *)startDate;
@end

