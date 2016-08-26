#pragma once

#include "tkEngine/graphics/tkSkinModelData.h"
#include "tkEngine/graphics/tkSkinModel.h"
#include "tkEngine/graphics/tkAnimation.h"
#include "tkEngine/graphics/tkEffect.h"
#include "tkEngine/graphics/tkCamera.h"
#include "tkEngine/graphics/tkLight.h"
#include "tkEngine/graphics/tkTexture.h"

/*!
 * @brief	���j�e�B�����
 */
class UnityChan : public IGameObject {
	enum AnimationNo {
		AnimationStand,		//�����B
		AnimationWalk,		//�����B
		AnimationRun,		//����B
		AnimationJump,		//�W�����v�B
	};
	CSkinModelData	skinModelData;		//�X�L�����f���f�[�^�B
	CSkinModel		skinModel;			//�X�L�����f���B
	CAnimation		animation;			//�A�j���[�V�����B
	CCamera			camera;				//�J�����B
	CLight			light;				//���C�g�B
	int				currentAnimSetNo;		
	CTexture		normalMap;			//�@���}�b�v�B
public:
	void Start() override ;
	void Update() override ;
	void Render( CRenderContext& renderContext ) override;
};