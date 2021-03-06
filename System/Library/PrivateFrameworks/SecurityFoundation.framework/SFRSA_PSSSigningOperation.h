/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SFRSASigningOperation.h>

@interface SFRSA_PSSSigningOperation : SFRSASigningOperation {

	id _pssSigningOperationInternal;

}

@property (nonatomic,copy) id<SFMaskGenerationFunction> maskGenerationFunction; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id<SFMaskGenerationFunction>)maskGenerationFunction;
-(id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2 ;
-(id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2 maskGenerationFunction:(id)arg3 ;
-(void)setMaskGenerationFunction:(id<SFMaskGenerationFunction>)arg1 ;
@end

