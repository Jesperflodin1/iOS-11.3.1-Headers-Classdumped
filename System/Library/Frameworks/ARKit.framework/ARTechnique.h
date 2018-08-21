/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARTechniqueDelegate.h>

@protocol ARTechniqueDelegate;
@class NSArray, NSString;

@interface ARTechnique : NSObject <ARTechniqueDelegate> {

	id<ARTechniqueDelegate> _delegate;
	NSArray* _techniques;
	unsigned long long _powerUsage;

}

@property (nonatomic,retain) NSArray * techniques;                                 //@synthesize techniques=_techniques - In the implementation block
@property (assign,nonatomic,__weak) id<ARTechniqueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long powerUsage;                        //@synthesize powerUsage=_powerUsage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<ARTechniqueDelegate>)delegate;
-(void)setDelegate:(id<ARTechniqueDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)technique:(id)arg1 didFailWithError:(id)arg2 ;
-(void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4 ;
-(unsigned long long)requiredSensorDataTypes;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(unsigned long long)powerUsage;
-(void)setPowerUsage:(unsigned long long)arg1 ;
-(id)resultDataClasses;
-(NSArray *)techniques;
-(void)setTechniques:(NSArray *)arg1 ;
-(id)initWithTechniques:(id)arg1 ;
-(id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(id)techniqueOfClass:(Class)arg1 ;
-(void)reconfigureFrom:(id)arg1 ;
-(id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3 ;
-(void)replaceTechniques:(id)arg1 ;
-(id)processData:(id)arg1 ;
@end

