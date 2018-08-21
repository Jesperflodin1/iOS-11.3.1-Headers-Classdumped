/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSchema.h>

@class NSSet, NSDictionary;

@interface NUCompositionSchema : NUSchema {

	NSSet* _requiredContents;
	NSDictionary* _contents;

}

@property (nonatomic,readonly) NSDictionary * contents;               //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) NSSet * requiredContents; 
+(id)supportedAttributes;
+(id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2 ;
-(long long)type;
-(NSDictionary *)contents;
-(id)copy:(id)arg1 ;
-(BOOL)validate:(id)arg1 error:(out id*)arg2 ;
-(id)copyComposition:(id)arg1 ;
-(id)modelForProperty:(id)arg1 ;
-(id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
-(BOOL)serializeIntoDictionary:(id)arg1 error:(out id*)arg2 ;
-(BOOL)validateAttribute:(id)arg1 value:(id)arg2 error:(out id*)arg3 ;
-(id)serialize:(id)arg1 error:(out id*)arg2 ;
-(id)deserialize:(id)arg1 error:(out id*)arg2 ;
-(id)initWithIdentifier:(id)arg1 attributes:(id)arg2 ;
-(NSArray*)schemaDependencies;
-(BOOL)validateContents:(out id*)arg1 ;
-(BOOL)validatePropertyArray:(id)arg1 error:(out id*)arg2 ;
-(BOOL)validateComposition:(id)arg1 error:(out id*)arg2 ;
-(BOOL)validateContents:(id)arg1 error:(out id*)arg2 ;
-(NSSet *)requiredContents;
-(id)serializeComposition:(id)arg1 error:(out id*)arg2 ;
-(id)deserializeComposition:(id)arg1 error:(out id*)arg2 ;
-(BOOL)serializeContents:(id)arg1 intoDictionary:(id)arg2 error:(out id*)arg3 ;
-(BOOL)deserializeContents:(id)arg1 fromDictionary:(id)arg2 error:(out id*)arg3 ;
-(id)initWithIdentifier:(id)arg1 contents:(NSDictionary*)arg2 attributes:(id)arg3 ;
-(BOOL)isValid:(out id*)arg1 ;
@end

