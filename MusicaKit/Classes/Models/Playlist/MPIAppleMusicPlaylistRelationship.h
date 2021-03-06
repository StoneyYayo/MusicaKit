//
//  MPIAppleMusicPlaylistRelationship.h
//  MusicaKit
//
//  Created by rurza on 02/08/2017.
//  Copyright © 2017 micropixels. All rights reserved.
//

#import "MPIAppleMusicRelationship.h"
#import "MPIAppleMusicPlaylistResource.h"

@interface MPIAppleMusicPlaylistRelationship : MPIAppleMusicRelationship
@property (nonatomic) NSArray<MPIAppleMusicPlaylistResource>        *data;
@end
