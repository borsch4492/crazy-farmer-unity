// GENERATED AUTOMATICALLY FROM 'Assets/player_controls.inputactions'

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Utilities;

public class @Player_controls : IInputActionCollection, IDisposable
{
    public InputActionAsset asset { get; }
    public @Player_controls()
    {
        asset = InputActionAsset.FromJson(@"{
    ""name"": ""player_controls"",
    ""maps"": [
        {
            ""name"": ""gameplay"",
            ""id"": ""dd27c9d8-f3d8-4859-b629-2b52e8290a87"",
            ""actions"": [
                {
                    ""name"": ""move"",
                    ""type"": ""Value"",
                    ""id"": ""ee35e7c5-cf2f-4e65-b64b-bef77bd7482a"",
                    ""expectedControlType"": """",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""restart"",
                    ""type"": ""Button"",
                    ""id"": ""d5ff6569-2f62-4708-b08c-cc80f187bf98"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""granade"",
                    ""type"": ""Button"",
                    ""id"": ""9b029237-ce2a-4f30-9ce2-2035c9b43831"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                }
            ],
            ""bindings"": [
                {
                    ""name"": """",
                    ""id"": ""377e5857-db60-406c-af01-61583fba5198"",
                    ""path"": ""<Gamepad>/leftStick"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""move"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""085f46dd-dc5a-47ab-a7f0-d87e0317906f"",
                    ""path"": ""<Gamepad>/buttonEast"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""restart"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""7d668cc8-8a93-4559-ba35-b5d72b4a6f0a"",
                    ""path"": ""<Gamepad>/buttonSouth"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""granade"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                }
            ]
        }
    ],
    ""controlSchemes"": []
}");
        // gameplay
        m_gameplay = asset.FindActionMap("gameplay", throwIfNotFound: true);
        m_gameplay_move = m_gameplay.FindAction("move", throwIfNotFound: true);
        m_gameplay_restart = m_gameplay.FindAction("restart", throwIfNotFound: true);
        m_gameplay_granade = m_gameplay.FindAction("granade", throwIfNotFound: true);
    }

    public void Dispose()
    {
        UnityEngine.Object.Destroy(asset);
    }

    public InputBinding? bindingMask
    {
        get => asset.bindingMask;
        set => asset.bindingMask = value;
    }

    public ReadOnlyArray<InputDevice>? devices
    {
        get => asset.devices;
        set => asset.devices = value;
    }

    public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;

    public bool Contains(InputAction action)
    {
        return asset.Contains(action);
    }

    public IEnumerator<InputAction> GetEnumerator()
    {
        return asset.GetEnumerator();
    }

    IEnumerator IEnumerable.GetEnumerator()
    {
        return GetEnumerator();
    }

    public void Enable()
    {
        asset.Enable();
    }

    public void Disable()
    {
        asset.Disable();
    }

    // gameplay
    private readonly InputActionMap m_gameplay;
    private IGameplayActions m_GameplayActionsCallbackInterface;
    private readonly InputAction m_gameplay_move;
    private readonly InputAction m_gameplay_restart;
    private readonly InputAction m_gameplay_granade;
    public struct GameplayActions
    {
        private @Player_controls m_Wrapper;
        public GameplayActions(@Player_controls wrapper) { m_Wrapper = wrapper; }
        public InputAction @move => m_Wrapper.m_gameplay_move;
        public InputAction @restart => m_Wrapper.m_gameplay_restart;
        public InputAction @granade => m_Wrapper.m_gameplay_granade;
        public InputActionMap Get() { return m_Wrapper.m_gameplay; }
        public void Enable() { Get().Enable(); }
        public void Disable() { Get().Disable(); }
        public bool enabled => Get().enabled;
        public static implicit operator InputActionMap(GameplayActions set) { return set.Get(); }
        public void SetCallbacks(IGameplayActions instance)
        {
            if (m_Wrapper.m_GameplayActionsCallbackInterface != null)
            {
                @move.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnMove;
                @move.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnMove;
                @move.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnMove;
                @restart.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnRestart;
                @restart.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnRestart;
                @restart.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnRestart;
                @granade.started -= m_Wrapper.m_GameplayActionsCallbackInterface.OnGranade;
                @granade.performed -= m_Wrapper.m_GameplayActionsCallbackInterface.OnGranade;
                @granade.canceled -= m_Wrapper.m_GameplayActionsCallbackInterface.OnGranade;
            }
            m_Wrapper.m_GameplayActionsCallbackInterface = instance;
            if (instance != null)
            {
                @move.started += instance.OnMove;
                @move.performed += instance.OnMove;
                @move.canceled += instance.OnMove;
                @restart.started += instance.OnRestart;
                @restart.performed += instance.OnRestart;
                @restart.canceled += instance.OnRestart;
                @granade.started += instance.OnGranade;
                @granade.performed += instance.OnGranade;
                @granade.canceled += instance.OnGranade;
            }
        }
    }
    public GameplayActions @gameplay => new GameplayActions(this);
    public interface IGameplayActions
    {
        void OnMove(InputAction.CallbackContext context);
        void OnRestart(InputAction.CallbackContext context);
        void OnGranade(InputAction.CallbackContext context);
    }
}
