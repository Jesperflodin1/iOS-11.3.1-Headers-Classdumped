/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PVSceneTaxonomy, NSString, NSMutableSet, NSSet;

@interface PVSceneTaxonomyNode : NSObject {

	BOOL _indexed;
	unsigned _sceneClassId;
	PVSceneTaxonomy* _taxonomy;
	NSString* _name;
	double _threshold;
	NSMutableSet* _parentNodes;
	NSMutableSet* _childNodes;

}

@property (retain) NSMutableSet * parentNodes;                   //@synthesize parentNodes=_parentNodes - In the implementation block
@property (retain) NSMutableSet * childNodes;                    //@synthesize childNodes=_childNodes - In the implementation block
@property (readonly) PVSceneTaxonomy * taxonomy;                 //@synthesize taxonomy=_taxonomy - In the implementation block
@property (readonly) unsigned sceneClassId;                      //@synthesize sceneClassId=_sceneClassId - In the implementation block
@property (copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (getter=isIndexed,readonly) BOOL indexed;              //@synthesize indexed=_indexed - In the implementation block
@property (readonly) double threshold;                           //@synthesize threshold=_threshold - In the implementation block
@property (copy,readonly) NSSet * parents; 
@property (copy,readonly) NSSet * children; 
@property (getter=isRoot,readonly) BOOL root; 
+(id)localizedStringForKey:(id)arg1 localizationBundle:(id)arg2 tableName:(id)arg3 ;
-(BOOL)isIndexed;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSMutableSet *)childNodes;
-(NSSet *)children;
-(id)localizedLabel;
-(void)setChildNodes:(NSMutableSet *)arg1 ;
-(void)addChildNode:(id)arg1 ;
-(BOOL)isRoot;
-(PVSceneTaxonomy *)taxonomy;
-(NSMutableSet *)parentNodes;
-(id)initWithSceneClassId:(unsigned)arg1 name:(id)arg2 indexed:(BOOL)arg3 threshold:(double)arg4 taxonomy:(id)arg5 ;
-(void)setParentNodes:(NSMutableSet *)arg1 ;
-(void)traverse:(long long)arg1 visitor:(/*^block*/id)arg2 ;
-(unsigned)sceneClassId;
-(BOOL)isEqualToNode:(id)arg1 ;
-(NSSet *)parents;
-(double)threshold;
-(id)localizedSynonyms;
@end

