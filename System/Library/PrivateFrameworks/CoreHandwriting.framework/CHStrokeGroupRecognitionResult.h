/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CHDrawing, NSArray, NSDictionary;

@interface CHStrokeGroupRecognitionResult : NSObject <NSCopying> {

	CHDrawing* _inputDrawing;
	NSArray* _inputDrawingCutPoints;
	NSArray* _inputStrokeIdentifiers;
	NSDictionary* __recognitionResultsByLocale;
	NSDictionary* __languageFitnessByLocale;

}

@property (nonatomic,retain,readonly) CHDrawing * inputDrawing; 
@property (nonatomic,copy,readonly) NSArray * inputDrawingCutPoints; 
@property (nonatomic,copy,readonly) NSDictionary * _recognitionResultsByLocale;              //@synthesize _recognitionResultsByLocale=__recognitionResultsByLocale - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * _languageFitnessByLocale;                 //@synthesize _languageFitnessByLocale=__languageFitnessByLocale - In the implementation block
@property (nonatomic,copy,readonly) NSArray * inputStrokeIdentifiers;                        //@synthesize inputStrokeIdentifiers=_inputStrokeIdentifiers - In the implementation block
+(id)sortedLocales:(id)arg1 byLanguageFitness:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CHDrawing *)inputDrawing;
-(NSArray *)inputDrawingCutPoints;
-(id)highConfidenceTextForSessionResult:(id)arg1 rejectionRate:(double*)arg2 ;
-(id)recognitionResultsForLocale:(id)arg1 ;
-(id)initWithResultsByLocale:(id)arg1 languageFitnessByLocale:(id)arg2 inputStrokeIdentifiers:(id)arg3 inputDrawing:(id)arg4 inputDrawingCutPoints:(id)arg5 ;
-(NSDictionary *)_recognitionResultsByLocale;
-(NSDictionary *)_languageFitnessByLocale;
-(id)initWithResultsByLocale:(id)arg1 languageFitnessByLocale:(id)arg2 inputStrokeIdentifiers:(id)arg3 ;
-(float)languageFitnessForLocale:(id)arg1 ;
-(NSArray *)inputStrokeIdentifiers;
@end

