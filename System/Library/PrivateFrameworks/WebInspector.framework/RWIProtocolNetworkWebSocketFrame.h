/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolNetworkWebSocketFrame : RWIProtocolJSONObject

@property (assign,nonatomic) double opcode; 
@property (assign,nonatomic) BOOL mask; 
@property (nonatomic,copy) NSString * payloadData; 
@property (assign,nonatomic) double payloadLength; 
-(void)setOpcode:(double)arg1 ;
-(double)opcode;
-(void)setMask:(BOOL)arg1 ;
-(BOOL)mask;
-(void)setPayloadLength:(double)arg1 ;
-(id)initWithOpcode:(double)arg1 mask:(BOOL)arg2 payloadData:(id)arg3 payloadLength:(double)arg4 ;
-(double)payloadLength;
-(NSString *)payloadData;
-(void)setPayloadData:(NSString *)arg1 ;
@end

