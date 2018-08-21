/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLModel.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class NSDictionary, MLFeatureValue;

@interface MLCategoricalMapping : MLModel <MLModelSpecificationLoader> {

	NSDictionary* _mapping;
	MLFeatureValue* _valueOnUnknown;

}

@property (nonatomic,readonly) NSDictionary * mapping;                       //@synthesize mapping=_mapping - In the implementation block
@property (nonatomic,readonly) MLFeatureValue * valueOnUnknown;              //@synthesize valueOnUnknown=_valueOnUnknown - In the implementation block
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 error:(id*)arg2 ;
-(id)initWithMapping:(id)arg1 valueOnUnknown:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 ;
-(MLFeatureValue *)valueOnUnknown;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(NSDictionary *)mapping;
@end
