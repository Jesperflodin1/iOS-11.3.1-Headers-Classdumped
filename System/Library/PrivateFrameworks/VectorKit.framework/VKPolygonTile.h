/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKSkewingVectorTile.h>
#import <libobjc.A.dylib/VKPolygonTile.h>

@protocol VKPolygonTile
@property (nonatomic,readonly) const vector<geo::_retain_ptr<VKPolygonGroup ** polygonGroups; 
@property (assign,nonatomic) float alpha; 
@required
-(void)setAlpha:(float)arg1;
-(float)alpha;
-(const vector<geo::_retain_ptr<VKPolygonGroup **)polygonGroups;

@end


@class VKAnimation;

@interface VKPolygonTile : VKSkewingVectorTile <VKPolygonTile> {

	vector<geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::allocator<geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > >* _polygonGroups;
	vector<std::__1::shared_ptr<md::CoastlineGroup>, std::__1::allocator<std::__1::shared_ptr<md::CoastlineGroup> > >* _coastlineGroups;
	float _alpha;
	float _scale;
	float _minLayeringHeight;
	float _maxLayeringHeight;
	VKAnimation* _animation;
	VKAnimation* _animationForPitch;
	unordered_map<unsigned long long, VKPolygonGroup *, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, VKPolygonGroup *> > >* _transitPolygonGroupMap;
	unordered_map<unsigned long long, md::PolygonRouteAttributes, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, md::PolygonRouteAttributes> > >* _transitNodesRouteAttributesMap;

}

@property (nonatomic,readonly) vector<std::__1::shared_ptr<md::CoastlineGroup>* coastlineGroups;              //@synthesize coastlineGroups=_coastlineGroups - In the implementation block
@property (assign,nonatomic) float scale;                                                                     //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) float minLayeringHeight;                                                       //@synthesize minLayeringHeight=_minLayeringHeight - In the implementation block
@property (nonatomic,readonly) float maxLayeringHeight;                                                       //@synthesize maxLayeringHeight=_maxLayeringHeight - In the implementation block
@property (nonatomic,retain) VKAnimation * animation;                                                         //@synthesize animation=_animation - In the implementation block
@property (nonatomic,retain) VKAnimation * animationForPitch;                                                 //@synthesize animationForPitch=_animationForPitch - In the implementation block
@property (nonatomic,readonly) const vector<geo::_retain_ptr<VKPolygonGroup ** polygonGroups; 
@property (assign,nonatomic) float alpha;                                                                     //@synthesize alpha=_alpha - In the implementation block
-(float)scale;
-(void)setAlpha:(float)arg1 ;
-(void)dealloc;
-(float)alpha;
-(void)setScale:(float)arg1 ;
-(VKAnimation *)animation;
-(void)setAnimation:(VKAnimation *)arg1 ;
-(const vector<geo::_retain_ptr<VKPolygonGroup **)polygonGroups;
-(id)initWithKey:(const VKTileKey*)arg1 modelTile:(id)arg2 prepareExtrusion:(BOOL)arg3 styleManager:(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)arg4 sharedResources:(id)arg5 contentScale:(double)arg6 device:(Device*)arg7 ;
-(void)buildMeshesWithDevice:(Device*)arg1 triangulator:(id)arg2 prepareExtrusion:(BOOL)arg3 ;
-(void)buildCoastlinesWithStyleManager:(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)arg1 ;
-(void)setTransitNodesRouteAttributes:(const unordered_map<unsigned long long, md::PolygonRouteAttributes, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, md::PolygonRouteAttributes> > >*)arg1 ;
-(vector<std::__1::shared_ptr<md::CoastlineGroup>*)coastlineGroups;
-(float)minLayeringHeight;
-(float)maxLayeringHeight;
-(VKAnimation *)animationForPitch;
-(void)setAnimationForPitch:(VKAnimation *)arg1 ;
@end

