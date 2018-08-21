/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>
#import <libobjc.A.dylib/PMLRegressionModelProtocol.h>
#import <libobjc.A.dylib/PMLClassifierModelProtocol.h>

@class NSString;

@interface PMLImmutableLogisticRegressionModel : NSObject <PMLPlistAndChunksSerializableProtocol, PMLRegressionModelProtocol, PMLClassifierModelProtocol> {

	id _backingObject;
	const float* _weights;
	int _length;
	BOOL _intercept;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toChunk;
-(BOOL)intercept;
-(id)initWithChunk:(id)arg1 intercept:(BOOL)arg2 ;
-(BOOL)classify:(id)arg1 ;
-(id)initWithFloatsNoCopy:(const float*)arg1 count:(int)arg2 intercept:(BOOL)arg3 ;
-(id)initWithWeights:(id)arg1 intercept:(BOOL)arg2 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(float)predict:(id)arg1 ;
@end
